//
//  ViewModel.swift
//  Popcorn
//
//  Created by Alejandro Morrison on 5/8/22.
//

import Foundation
import Firebase

class ViewModel: ObservableObject {
    @Published var list = [Todo]()
    
//    func updateData(todotoUpdate: Todo) {
//        let db = Firestore.firestore()
//
//        db.collection("todo").document(todotoUpdate.id).setData(["name": "updated todo name", "notes": "some notes"])
//    }
    
    func deleteData(todoToDelete: Todo) {
        let db = Firestore.firestore()
        
        db.collection("Todo").document(todoToDelete.id).delete { error in
            
            if error == nil {
                // no errors
                
                DispatchQueue.main.async {
                    self.list.removeAll { todo in
                        return todo.id == todoToDelete.id
                    }
                }
            }
        }
    }
    
    func addData(name: String, notes: String) {
        //Get a reference to the database
        let db = Firestore.firestore()
        
        // Add a document to a collection
        db.collection("Todo").addDocument(data: ["name": name, "notes": notes]) { error in
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
        db.collection("Todo").getDocuments { snapshot, error in
            
            // check for errors
            if error == nil {
                // no errors
                if let snapshot = snapshot {
                    
                    DispatchQueue.main .async {
                        
                        //Get all the documents and create Todos
                        self.list = snapshot.documents.map { d in
                            
                            return Todo(
                                id: d.documentID,
                                name: d["name"] as? String ?? "",
                                notes: d["notes"] as? String ?? "")
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
