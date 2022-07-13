//
//  PopcornApp.swift
//  Popcorn
//
//  Created by Alejandro Morrison on 5/7/22.
//

import SwiftUI
import Firebase

@main
struct PopcornApp: App {
    
    init() {
        FirebaseApp.configure()
    }
    
    var body: some Scene {
        WindowGroup {
//            ContentView()
            MainView()
        }
    }
}
