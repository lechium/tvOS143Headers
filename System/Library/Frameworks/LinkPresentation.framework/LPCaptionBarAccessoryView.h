/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:22 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <LinkPresentation/LPComponentView.h>

@class UIColor, UIImageView;

@interface LPCaptionBarAccessoryView : LPComponentView {

	long long _type;
	UIColor* _color;
	UIImageView* _accessoryView;
	BOOL _shouldFlipHorizontally;

}

@property (nonatomic,readonly) CGSize size; 
-(id)init;
-(CGSize)size;
-(void)layoutComponentView;
-(id)_createImageViewWithImage:(id)arg1 ;
-(id)ensureAccessoryView;
-(id)initWithType:(long long)arg1 side:(long long)arg2 ;
@end

