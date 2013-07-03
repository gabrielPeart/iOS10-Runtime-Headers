/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, UIFont;

@interface _UIInlineCandidateCell : UIView  {
    NSString *_candidate;
    unsigned int _index;
    UIFont *_font;
    struct CGSize { 
        float width; 
        float height; 
    } _stringImageSize;
    BOOL _highlighted;
    id _target;
    SEL _action;
    BOOL _lastItem;
    BOOL _dontDrawRightEdge;
}

+ (id)_initializeSafeCategoryFromValidationManager;
+ (void)_initializeSafeCategory;

- (unsigned int)index;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)dontDrawRightEdge:(BOOL)arg1;
- (void)setLastItem:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })stringImageSize;
- (id)initWithCandidate:(id)arg1 andIndex:(unsigned int)arg2 withFontSize:(float)arg3 target:(id)arg4 action:(SEL)arg5;
- (void)setHighlighted:(BOOL)arg1;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;

@end