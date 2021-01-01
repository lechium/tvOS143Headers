/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:48 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVLegacyContentKit/TVLRootElement.h>

@class NSArray, NSString;

@interface TVLViewWithNavigationBarElement : TVLRootElement {

	long long _currentIndex;
	NSArray* _navigationItems;
	NSString* _onNavigate;

}

@property (assign,nonatomic) long long currentIndex;               //@synthesize currentIndex=_currentIndex - In the implementation block
@property (nonatomic,copy) NSArray * navigationItems;              //@synthesize navigationItems=_navigationItems - In the implementation block
@property (nonatomic,copy) NSString * onNavigate;                  //@synthesize onNavigate=_onNavigate - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)setCurrentIndex:(long long)arg1 ;
-(long long)currentIndex;
-(id)initWithXMLElement:(id)arg1 feedDocument:(id)arg2 ;
-(NSArray *)navigationItems;
-(NSString *)onNavigate;
-(void)setNavigationItems:(NSArray *)arg1 ;
-(void)setOnNavigate:(NSString *)arg1 ;
@end

