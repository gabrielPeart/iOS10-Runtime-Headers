/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class UIImage, UIColor, MPImageModifier, <NSObject><NSCopying>, MPImageCache, <MPImageRequestDelegate>;

@interface MPImageCacheRequest : NSOperation  {
    MPImageCache *_cache;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionHandler;

    int _contentMode;
    BOOL _decodeOnFetch;
    <MPImageRequestDelegate> *_delegate;
    UIColor *_fillColor;
    struct CGSize { 
        float width; 
        float height; 
    } _finalSize;
    BOOL _finalSizeMayDifferWhenApsectRatioMatches;
    MPImageModifier *_modifier;
    <NSObject><NSCopying> *_uniqueKey;
    long long _tag;
    int _interpolationQuality;
}

@property MPImageCache * cache;
@property(retain) UIColor * fillColor;
@property struct CGSize { float x1; float x2; } finalSize;
@property BOOL finalSizeMayDifferWhenApsectRatioMatches;
@property int contentMode;
@property int interpolationQuality;
@property(retain) MPImageModifier * modifier;
@property(readonly) UIImage * placeholderImage;
@property(readonly) UIImage * finalPlaceholderImage;
@property(retain) <NSObject><NSCopying> * uniqueKey;
@property long long tag;
@property BOOL decodeOnFetch;
@property(readonly) BOOL canRequestSynchronously;
@property(copy) id completionHandler;
@property <MPImageRequestDelegate> * delegate;


- (void)_sendErrorToDelegate:(id)arg1;
- (id)uniqueKey;
- (void)setInterpolationQuality:(int)arg1;
- (int)interpolationQuality;
- (void)setFinalSizeMayDifferWhenApsectRatioMatches:(BOOL)arg1;
- (BOOL)finalSizeMayDifferWhenApsectRatioMatches;
- (void)setUniqueKey:(id)arg1;
- (id)finalPlaceholderImage;
- (BOOL)canRequestSynchronously;
- (void)_getGeometryForCreatingNewImage:(id)arg1 finalSize:(struct CGSize { float x1; float x2; })arg2 contentSize:(struct CGSize { float x1; float x2; }*)arg3 contentSubRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg4 imageFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg5;
- (void)_sendImageToDelegate:(id)arg1;
- (BOOL)decodeOnFetch;
- (id)_newBitmapImageFromImage:(id)arg1 finalSize:(struct CGSize { float x1; float x2; })arg2;
- (BOOL)_canUseInputImageAsFinalOutput:(id)arg1;
- (struct CGSize { float x1; float x2; })finalSize;
- (void)completeImageLoadOperationWithImage:(id)arg1;
- (void)setModifier:(id)arg1;
- (id)copyImageFromImage:(id)arg1;
- (id)copyRawImageReturningError:(id*)arg1;
- (void)setDecodeOnFetch:(BOOL)arg1;
- (void)setFinalSize:(struct CGSize { float x1; float x2; })arg1;
- (id)placeholderImage;
- (void)setFillColor:(id)arg1;
- (id)fillColor;
- (id)cache;
- (id)init;
- (void)setDelegate:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void).cxx_destruct;
- (id)description;
- (id)delegate;
- (void)cancel;
- (void)setCache:(id)arg1;
- (void)setCompletionHandler:(id)arg1;
- (id)completionHandler;
- (long long)tag;
- (int)contentMode;
- (void)setTag:(long long)arg1;
- (void)setContentMode:(int)arg1;
- (id)modifier;
- (void)main;

@end