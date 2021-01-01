/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:48 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
#import <TVKit/TVHeaderView.h>
#import <ATVLegacyContentKit/ATVUpdatable.h>

@class TVLDividerElement;

@interface TVLDividerView : TVHeaderView <ATVUpdatable> {

	TVLDividerElement* _dividerElement;

}

@property (nonatomic,readonly) TVLDividerElement * dividerElement;              //@synthesize dividerElement=_dividerElement - In the implementation block
+(id)titleFont;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(BOOL)canBecomeFocused;
-(id)initWithDividerElement:(id)arg1 ;
-(id)currentFeedElement;
-(void)updateWithFeedElement:(id)arg1 ;
-(TVLDividerElement *)dividerElement;
@end

