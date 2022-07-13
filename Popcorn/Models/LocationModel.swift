//
//  LocationModel.swift
//  Popcorn
//
//  Created by Alejandro Morrison on 5/9/22.
//

import Foundation
import MapKit

struct HospitalLocations: Codable, Identifiable {
  var id: String
  var name: String
  var image: String
  var latitude: Double
  var longitude: Double
  
  // Computed Property
  var location: CLLocationCoordinate2D {
    CLLocationCoordinate2D(latitude: latitude, longitude: longitude)
  }
}
