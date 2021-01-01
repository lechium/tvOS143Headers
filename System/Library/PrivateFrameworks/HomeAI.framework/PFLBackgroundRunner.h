/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:00 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/_DASExtensionRunner.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class HMIDESBackgroundTask, NSString;

@interface PFLBackgroundRunner : HMFObject <_DASExtensionRunner, HMFLogging> {

	HMIDESBackgroundTask* _task;

}

@property (retain) HMIDESBackgroundTask * task;                     //@synthesize task=_task - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id)init;
-(unsigned char)start;
-(void)stop;
-(HMIDESBackgroundTask *)task;
-(void)setTask:(HMIDESBackgroundTask *)arg1 ;
-(BOOL)prepareForActivity:(id)arg1 ;
-(id)runSession:(id)arg1 jsonResult:(id*)arg2 error:(id*)arg3 ;
-(BOOL)stringForKey:(id)arg1 info:(id)arg2 value:(id*)arg3 error:(id*)arg4 ;
-(id)getAttachmentFromRecipe:(id)arg1 name:(id)arg2 ;
-(BOOL)arrayForKey:(id)arg1 info:(id)arg2 value:(id*)arg3 error:(id*)arg4 ;
-(BOOL)numberForKey:(id)arg1 info:(id)arg2 value:(id*)arg3 error:(id*)arg4 ;
-(BOOL)dictionaryForKey:(id)arg1 info:(id)arg2 value:(id*)arg3 error:(id*)arg4 ;
@end
