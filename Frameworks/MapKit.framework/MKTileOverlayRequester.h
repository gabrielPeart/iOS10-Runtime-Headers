/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSMutableArray, NSMutableSet;

@interface MKTileOverlayRequester : GEOTileRequester  {
    BOOL _cancelled;
    NSMutableArray *_waiting;
    NSMutableSet *_running;
    NSMutableArray *_errors;
}

+ (void)unregisterOverlay:(unsigned int)arg1;
+ (unsigned int)registerOverlay:(id)arg1;
+ (unsigned char)tileProviderIdentifier;

- (void)_operationFinished:(id)arg1;
- (void)_operationFailed:(id)arg1 error:(id)arg2;
- (void)_doWorkOrFinish;
- (void)dealloc;
- (void)cancel;
- (void)_cleanup;
- (BOOL)isRunning;
- (void)start;

@end