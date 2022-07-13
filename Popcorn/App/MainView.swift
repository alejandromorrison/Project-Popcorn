//
//  MainView.swift
//  Popcorn
//
//  Created by Alejandro Morrison on 5/8/22.
//

import SwiftUI

struct MainView: View {
    var body: some View {
        TabView {
            // Tabview for the map
            MapView()
              .tabItem {
                Image(systemName: "map")
                Text("Center Locations")
              }

            //Tabview for the Pacients reference tab
            PatientsReferenceView()
              .tabItem {
                Image(systemName: "list.dash")
                Text("Patients")
              }
            
            //Tabiew for videos
            VideoListView()
              .tabItem {
                Image(systemName: "play.rectangle")
                Text("Educational Videos")
              }
        }
    }
}

struct MainView_Previews: PreviewProvider {
    static var previews: some View {
        MainView()
    }
}
