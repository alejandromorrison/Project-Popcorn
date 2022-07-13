//
//  ViewPatientsModel.swift
//  Popcorn
//
//  Created by Alejandro Morrison on 5/8/22.
//

import Foundation
import Firebase

class ViewPatientsModel: ObservableObject {
    @Published var patientList = [PatientsModel]()
    
    func deleteData(patientsToDelete: PatientsModel) {
        let db = Firestore.firestore()
        
        db.collection("popcorn_recomendations").document(patientsToDelete.id).delete { error in
            
            if error == nil {
                // no errors
                
                DispatchQueue.main.async {
                    self.patientList.removeAll { patients in
                        return patients.id == patientsToDelete.id
                    }
                }
            }
        }
    }
    
    func addData(firstName: String, lastName: String, Email: String) {
        //Get a reference to the database
        let db = Firestore.firestore()
        
        // Add a document to a collection
        db.collection("popcorn_recomendations").addDocument(
            data: ["firstName": firstName, "lastName": lastName, "email": Email]) { error in
            // check for errors
            if error == nil {
                // No errors
                self.getData()
                
            } else {
                // Handle the errors
            }
        }
    }
    
    func getData() {
        // get a reference to the database
        let db = Firestore.firestore()
        
        // Read the documents to a specific path
        db.collection("popcorn_recomendations").getDocuments { snapshot, error in
            
            // check for errors
            if error == nil {
                // no errors
                if let snapshot = snapshot {
                    
                    DispatchQueue.main .async {
                        
                        //Get all the documents and create Todos
                        self.patientList = snapshot.documents.map { d in
                            
                            return PatientsModel(
                                id: d.documentID,
                                firstName: d["firstName"] as? String ?? "",
                                lastName: d["lastName"] as? String ?? "",
                                email: d["email"] as? String ?? ""
                            )
                        }
                    }

                }
            }
            else {
                // Handle the error
            }
        }
    }

}
