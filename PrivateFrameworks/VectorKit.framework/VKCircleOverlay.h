/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class GEOMapRegion;

@interface VKCircleOverlay : NSObject <VKOverlay> {
    struct { 
        double latitude; 
        double longitude; 
    } _coordinate;
    GEOMapRegion *_boundingMapRegion;
    double _radius;
}

@property(readonly) struct { double x1; double x2; } coordinate;
@property(readonly) GEOMapRegion * boundingMapRegion;
@property(readonly) double radius;

+ (id)circleWithCenterCoordinate:(struct { double x1; double x2; })arg1 radius:(double)arg2;

- (id)boundingMapRegion;
- (id)_initWithCenterCoordinate:(struct { double x1; double x2; })arg1 radius:(double)arg2;
- (struct { double x1; double x2; })coordinate;
- (double)radius;
- (void)dealloc;
- (id).cxx_construct;

@end