//
//  PatientsReferenceView.swift
//  Popcorn
//
//  Created by Alejandro Morrison on 5/8/22.
//

import SwiftUI

struct PatientsReferenceView: View {
    
    @ObservedObject var patientsmodel = ViewPatientsModel()
    
    @State var firstName = ""
    @State var lastName = ""
    @State var email = ""
    
    var body: some View {
        NavigationView {
            VStack {
                List (patientsmodel.patientList) { item in
                    HStack {
                        VStack {
                        HStack {
                            Text(item.firstName)
                            Text(item.lastName)
                        }
                        Text(item.email)
                                .font(.system(size: 10))
                        }
                        Spacer()
                        Button(action: {
                            patientsmodel.deleteData(patientsToDelete: item)
                        }, label: {
                            Image(systemName: "minus.circle")
                        })
                    }
                }
                
                VStack(spacing: 5) {
                    Divider()
                    
                    TextField("firstName", text: $firstName)
                        .textFieldStyle(RoundedBorderTextFieldStyle())
                    
                    TextField("lastName", text: $lastName)
                        .textFieldStyle(RoundedBorderTextFieldStyle())
                    
                    TextField("EMail", text: $email)
                        .textFieldStyle(RoundedBorderTextFieldStyle())
                    
                    Button(action: {
                        patientsmodel.addData(firstName: firstName, lastName: lastName, Email: email)
                        
                        // clear the text fields
                        firstName = ""
                        lastName = ""
                        email = ""
                    }, label: {
                        Text("Add a patients Item")
                    })
                }
                .padding()
            }
            .navigationTitle("Patient Suggestion")
    }
}
    
    init() {
        patientsmodel.getData()
    }
}

struct PatientsReferenceView_Previews: PreviewProvider {
    static var previews: some View {
        PatientsReferenceView()
    }
}
