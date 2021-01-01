/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:35 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol INIntentPreferencesAndVocabularyUpdateService, OS_dispatch_queue;
@class NSXPCConnection, NSObject;

@interface _INVocabularyConnection : NSObject {

	NSXPCConnection* _connection;
	id<INIntentPreferencesAndVocabularyUpdateService> _remoteObjectProxy;
	NSObject*<OS_dispatch_queue> _queue;

}
+(void)initialize;
-(id)init;
-(void)dealloc;
-(id)_connection;
-(id)_syncService;
-(void)_clearConnection;
-(id)settingsService;
@end

