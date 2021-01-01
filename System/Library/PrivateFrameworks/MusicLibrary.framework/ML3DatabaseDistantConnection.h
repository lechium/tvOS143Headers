/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:38 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <MusicLibrary/ML3DatabaseConnection.h>

@protocol ML3DatabaseDistantConnectionDelegate;
@class MLMediaLibraryService, NSUUID;

@interface ML3DatabaseDistantConnection : ML3DatabaseConnection {

	MLMediaLibraryService* _mediaLibraryService;
	NSUUID* _currentTransactionID;
	BOOL _connectionOpen;
	id<ML3DatabaseDistantConnectionDelegate> _distantDelegate;

}

@property (assign,nonatomic,__weak) id<ML3DatabaseDistantConnectionDelegate> distantDelegate;              //@synthesize distantDelegate=_distantDelegate - In the implementation block
-(void)dealloc;
-(BOOL)close;
-(BOOL)isOpen;
-(BOOL)isReadOnly;
-(void)setReadOnly:(BOOL)arg1 ;
-(sqlite3Ref)_sqliteHandle;
-(id)currentTransactionID;
-(id)initWithDatabasePath:(id)arg1 ;
-(BOOL)registerFunctionName:(id)arg1 argumentCount:(int)arg2 block:(/*^block*/id)arg3 ;
-(id)openBlobInTable:(id)arg1 column:(id)arg2 row:(long long)arg3 readOnly:(BOOL)arg4 ;
-(BOOL)registerModule:(id)arg1 ;
-(void)setProfilingLevel:(int)arg1 ;
-(BOOL)_openWithFlags:(int)arg1 ;
-(id)_internalExecuteQuery:(id)arg1 withParameters:(id)arg2 limitProperty:(id)arg3 limitValue:(long long)arg4 ;
-(BOOL)_internalExecuteUpdate:(id)arg1 withParameters:(id)arg2 error:(id*)arg3 ;
-(BOOL)_internalBeginTransactionWithBehaviorType:(unsigned long long)arg1 ;
-(BOOL)_internalEndTransactionAndCommit:(BOOL)arg1 ;
-(BOOL)registerFunctionName:(id)arg1 argumentCount:(int)arg2 functionPointer:(/*function pointer*/void*)arg3 userData:(void*)arg4 ;
-(int)checkpointDatabase;
-(void)_serviceTerminatedTransactionNotification:(id)arg1 ;
-(BOOL)_internalBeginTransactionWithBehaviorType:(unsigned long long)arg1 isRetry:(BOOL)arg2 ;
-(BOOL)shouldCacheStatements;
-(id<ML3DatabaseDistantConnectionDelegate>)distantDelegate;
-(void)setDistantDelegate:(id<ML3DatabaseDistantConnectionDelegate>)arg1 ;
@end

