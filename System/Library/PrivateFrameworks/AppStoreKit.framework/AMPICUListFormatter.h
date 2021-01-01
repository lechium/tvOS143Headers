/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:13 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSListFormatter.h>

@class NSString;

@interface AMPICUListFormatter : NSListFormatter {

	NSString* _style;

}

@property (nonatomic,copy) NSString * style;              //@synthesize style=_style - In the implementation block
+(id)localizedStringByJoiningStrings:(id)arg1 ;
+(id)localizedStringByJoiningStrings:(id)arg1 style:(id)arg2 ;
-(id)initWithLocale:(id)arg1 ;
-(id)_stringFromStringArray:(id)arg1 ;
-(NSString *)style;
-(void)setStyle:(NSString *)arg1 ;
-(id)initWithLocale:(id)arg1 style:(id)arg2 ;
@end

