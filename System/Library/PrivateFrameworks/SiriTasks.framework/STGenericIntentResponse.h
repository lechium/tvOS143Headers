/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:02 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AssistantServices/AFSiriResponse.h>

@interface STGenericIntentResponse : AFSiriResponse {

	long long _responseCode;

}

@property (assign,nonatomic) long long responseCode;              //@synthesize responseCode=_responseCode - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)responseCode;
-(void)setResponseCode:(long long)arg1 ;
@end

