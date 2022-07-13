//
//  MapView.swift
//  Popcorn
//
//  Created by Alejandro Morrison on 5/8/22.
//

import SwiftUI
import MapKit

struct MapView: View {
    // MARK: - PROPERTIES
    
    @State private var region: MKCoordinateRegion = {
      var mapCoordinates = CLLocationCoordinate2D(latitude: 40.462762, longitude: -74.280425)
        var mapZoomLevel = MKCoordinateSpan(latitudeDelta: 0.5, longitudeDelta: 0.5)
      var mapRegion = MKCoordinateRegion(center: mapCoordinates, span: mapZoomLevel)
      
      return mapRegion
    }()
    
    let locations: [HospitalLocations] = Bundle.main.decode("locations.json")
    
    // MARK: - BODY
    
    var body: some View {
      
      Map(coordinateRegion: $region, annotationItems: locations, annotationContent: { item in
          
        MapAnnotation(coordinate: item.location) {
          MapAnnotationView(location: item)
        }
      }) //: MAP
    }
}

struct MapView_Previews: PreviewProvider {
    static var previews: some View {
        MapView()
    }
}
