/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:02 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SearchFoundation/SFFeedback.h>

@class NSString;

@interface SFDidGoToSiteFeedback : SFFeedback {

	NSString* _input;

}

@property (nonatomic,copy) NSString * input;              //@synthesize input=_input - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)input;
-(void)setInput:(NSString *)arg1 ;
-(id)initWithInput:(id)arg1 ;
@end
