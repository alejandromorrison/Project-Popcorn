//
//  VideoListItemView.swift
//  Popcorn
//
//  Created by Alejandro Morrison on 5/9/22.
//

import SwiftUI

struct VideoListItemView: View {
    
    let video: Video
    
    var body: some View {
        HStack(spacing: 10) {
          ZStack {
            Image(systemName: "play.circle")
              .resizable()
              .scaledToFit()
              .frame(height: 32)
              .shadow(radius: 4)
          } //: ZSTACK
          
          VStack(alignment: .leading, spacing: 10) {
            Text(video.name)
              .font(.title2)
              .fontWeight(.heavy)
              .foregroundColor(.accentColor)
            
            Text(video.headline)
              .font(.footnote)
              .multilineTextAlignment(.leading)
              .lineLimit(2)
          } //: VSTACK
        } //: HSTACK
    }
}

struct VideoListItemView_Previews: PreviewProvider {
    static let videos: [Video] = Bundle.main.decode("videos.json")
    
    static var previews: some View {
        VideoListItemView(video: videos[0])
            .previewLayout(.sizeThatFits)
            .padding()
    }
}
