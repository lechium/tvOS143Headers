/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:37 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/ML3ClientImportSessionXPCInterface.h>

@protocol ML3ClientImportSessionDelegate;
@class NSXPCConnection, ML3ClientImportSessionConfiguration, NSProgress, NSString;

@interface ML3ClientImportSession : NSObject <ML3ClientImportSessionXPCInterface> {

	NSXPCConnection* _xpcClientConnection;
	id<ML3ClientImportSessionDelegate> _delegate;
	ML3ClientImportSessionConfiguration* _sessionConfiguration;
	BOOL _hasActiveSession;
	NSProgress* _progress;

}

@property (nonatomic,readonly) NSProgress * progress;               //@synthesize progress=_progress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)cancel;
-(BOOL)start;
-(NSProgress *)progress;
-(BOOL)finish;
-(BOOL)removeItems:(id)arg1 ;
-(BOOL)addItems:(id)arg1 ;
-(id)_xpcClientConnection;
-(id)addItemsReturningResult:(id)arg1 ;
-(id)updateItemsReturningResult:(id)arg1 ;
-(id)removeItemsReturningResult:(id)arg1 ;
-(void)sessionFailedToAddItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)sessionFailedToUpdateItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)sessionFailedToRemoveItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)sessionDidUpdateProgress:(float)arg1 ;
-(id)initWithConfiguration:(id)arg1 delegate:(id)arg2 ;
-(BOOL)updateItems:(id)arg1 ;
@end

