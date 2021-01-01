/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:16 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SiriTVUI.framework/SiriTVUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriTVUI/SiriTVUITemplateItem.h>

@class NSArray, NSDictionary;

@interface SiriTVUISegmentedControlTemplateItem : SiriTVUITemplateItem {

	NSArray* _titles;
	NSDictionary* _backgroundColors;
	NSDictionary* _textColors;

}

@property (nonatomic,copy) NSArray * titles;                             //@synthesize titles=_titles - In the implementation block
@property (nonatomic,copy) NSDictionary * backgroundColors;              //@synthesize backgroundColors=_backgroundColors - In the implementation block
@property (nonatomic,copy) NSDictionary * textColors;                    //@synthesize textColors=_textColors - In the implementation block
-(NSArray *)titles;
-(void)setTitles:(NSArray *)arg1 ;
-(NSDictionary *)backgroundColors;
-(void)setBackgroundColors:(NSDictionary *)arg1 ;
-(NSDictionary *)textColors;
-(void)setTextColors:(NSDictionary *)arg1 ;
-(id)backgroundColorForUserInterfaceStyle:(long long)arg1 ;
-(id)initWithTitles:(id)arg1 backgroundColors:(id)arg2 andTextColors:(id)arg3 ;
-(id)titleTextAttributesForUserIntefaceStyle:(long long)arg1 ;
@end
