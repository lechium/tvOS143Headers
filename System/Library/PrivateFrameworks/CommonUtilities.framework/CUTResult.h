/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:09 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSError;

@interface CUTResult : NSObject {

	long long _state;
	NSError* _inError;
	id _inValue;

}

@property (nonatomic,retain) NSError * inError;              //@synthesize inError=_inError - In the implementation block
@property (nonatomic,retain) id inValue;                     //@synthesize inValue=_inValue - In the implementation block
@property (nonatomic,readonly) long long state;              //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,readonly) id value; 
-(NSError *)error;
-(long long)state;
-(id)value;
-(id)initWithSuccess:(id)arg1 ;
-(id)initWithError:(id)arg1 ;
-(id)initWithState:(long long)arg1 value:(id)arg2 error:(id)arg3 ;
-(NSError *)inError;
-(void)setInError:(NSError *)arg1 ;
-(id)inValue;
-(void)setInValue:(id)arg1 ;
@end

