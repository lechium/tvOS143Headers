/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:33 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AssistantServices/AssistantServices-Structs.h>
@interface AFThreeArgumentSafetyBlock : NSObject {

	atomic_flag _hasInvoked;
	/*^block*/id _block;
	id _defaultValue1;
	id _defaultValue2;
	id _defaultValue3;

}
-(void)dealloc;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 defaultValue1:(id)arg2 defaultValue2:(id)arg3 defaultValue3:(id)arg4 ;
-(BOOL)invokeWithValue:(id)arg1 andValue:(id)arg2 andValue:(id)arg3 ;
@end

