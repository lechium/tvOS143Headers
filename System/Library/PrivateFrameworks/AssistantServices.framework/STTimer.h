/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:33 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AssistantServices/STSiriModelObject.h>

@class NSNumber;

@interface STTimer : STSiriModelObject {

	long long _state;
	NSNumber* _value;

}

@property (assign,nonatomic) long long state;              //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) NSNumber * value;               //@synthesize value=_value - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(NSNumber *)value;
-(void)setValue:(NSNumber *)arg1 ;
@end
