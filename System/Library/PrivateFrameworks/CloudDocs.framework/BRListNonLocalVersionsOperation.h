/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:20 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSOperation.h>
#import <libobjc.A.dylib/BRNonLocalVersionReceiving.h>

@protocol BRNonLocalVersionSending;
@class NSURL, NSMutableArray, NSMutableDictionary, GSPermanentStorage, NSError, NSString;

@interface BRListNonLocalVersionsOperation : NSOperation <BRNonLocalVersionReceiving> {

	NSURL* _documentURL;
	NSMutableArray* _versions;
	NSMutableDictionary* _versionsByEtag;
	GSPermanentStorage* _versionsStore;
	id<BRNonLocalVersionSending> _sender;
	BOOL _executing;
	BOOL _finished;
	BOOL _includeCachedVersions;
	char _state;
	/*^block*/id _fetchingVersionsDoneBlock;

}

@property (assign,getter=isExecuting,nonatomic) BOOL executing;              //@synthesize executing=_executing - In the implementation block
@property (assign,getter=isFinished,nonatomic) BOOL finished;                //@synthesize finished=_finished - In the implementation block
@property (nonatomic,retain) NSError * error; 
@property (nonatomic,copy,readonly) NSMutableArray * versions;               //@synthesize versions=_versions - In the implementation block
@property (assign,nonatomic) BOOL includeCachedVersions;                     //@synthesize includeCachedVersions=_includeCachedVersions - In the implementation block
@property (nonatomic,copy) id fetchingVersionsDoneBlock;                     //@synthesize fetchingVersionsDoneBlock=_fetchingVersionsDoneBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(void)dealloc;
-(NSError *)error;
-(void)cancel;
-(void)setError:(NSError *)arg1 ;
-(void)start;
-(void)setFinished:(BOOL)arg1 ;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isConcurrent;
-(BOOL)isAsynchronous;
-(id)initWithDocumentURL:(id)arg1 ;
-(void)setIncludeCachedVersions:(BOOL)arg1 ;
-(void)setFetchingVersionsDoneBlock:(id)arg1 ;
-(void)setExecuting:(BOOL)arg1 ;
-(NSMutableArray *)versions;
-(void)_senderInvalidate;
-(BOOL)__finishIfCancelled;
-(BOOL)__advanceToState:(char)arg1 result:(id)arg2 error:(id)arg3 ;
-(BOOL)_advanceToState:(char)arg1 result:(id)arg2 error:(id)arg3 ;
-(BOOL)_setVersionStoreForDocumentAtURL:(id)arg1 error:(id*)arg2 ;
-(void)_addVersion:(id)arg1 ;
-(oneway void)newFaultVersionAtURL:(id)arg1 faultURL:(id)arg2 faultExtension:(id)arg3 etag:(id)arg4 hasThumbnail:(BOOL)arg5 displayName:(id)arg6 lastEditorDeviceName:(id)arg7 lastEditorNameComponents:(id)arg8 modificationDate:(id)arg9 ;
-(oneway void)newCachedVersionAtURL:(id)arg1 size:(id)arg2 etag:(id)arg3 hasThumbnail:(BOOL)arg4 displayName:(id)arg5 lastEditorDeviceName:(id)arg6 lastEditorNameComponents:(id)arg7 modificationDate:(id)arg8 ;
-(oneway void)versionsDone;
-(oneway void)newThumbnailForVersionWithEtag:(id)arg1 ;
-(BOOL)includeCachedVersions;
-(id)fetchingVersionsDoneBlock;
@end

