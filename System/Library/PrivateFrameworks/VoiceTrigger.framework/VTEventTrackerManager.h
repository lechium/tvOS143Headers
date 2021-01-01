/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:58 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject;

@interface VTEventTrackerManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;

}
-(id)init;
-(id)_sortedURLsInDirectory:(id)arg1 matchingPattern:(id)arg2 ;
-(id)_contentsOfDirectoryAtURL:(id)arg1 matchingPattern:(id)arg2 sortedByDateWithResourceKey:(id)arg3 error:(id*)arg4 ;
-(id)_contentsOfDirectoryAtURL:(id)arg1 matchingPattern:(id)arg2 includingPropertiesForKeys:(id)arg3 error:(id*)arg4 ;
-(void)voiceTriggerEvent:(/*^block*/id)arg1 ;
-(id)_dictionaryToJson:(id)arg1 ;
@end
