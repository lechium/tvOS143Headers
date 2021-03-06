/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:41 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIButton, NSString;

@interface MKUGCCallToActionAddPhotosAccessoryView : UIView {

	UIButton* _addPhotosButton;
	NSString* _glyphName;

}

@property (nonatomic,copy) NSString * glyphName;              //@synthesize glyphName=_glyphName - In the implementation block
-(NSString *)glyphName;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTarget:(id)arg1 action:(SEL)arg2 ;
-(void)_setupButtons;
-(void)_contentSizeChanged;
-(void)setGlyphName:(NSString *)arg1 ;
@end

