/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:03 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface ENLinkedNotebookRef : NSObject <NSCoding> {

	NSString* _guid;
	NSString* _noteStoreUrl;
	NSString* _shardId;
	NSString* _sharedNotebookGlobalId;

}

@property (nonatomic,retain) NSString * guid;                                //@synthesize guid=_guid - In the implementation block
@property (nonatomic,retain) NSString * noteStoreUrl;                        //@synthesize noteStoreUrl=_noteStoreUrl - In the implementation block
@property (nonatomic,retain) NSString * shardId;                             //@synthesize shardId=_shardId - In the implementation block
@property (nonatomic,retain) NSString * sharedNotebookGlobalId;              //@synthesize sharedNotebookGlobalId=_sharedNotebookGlobalId - In the implementation block
+(id)linkedNotebookRefFromLinkedNotebook:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setGuid:(NSString *)arg1 ;
-(NSString *)guid;
-(NSString *)noteStoreUrl;
-(void)setNoteStoreUrl:(NSString *)arg1 ;
-(NSString *)shardId;
-(void)setShardId:(NSString *)arg1 ;
-(NSString *)sharedNotebookGlobalId;
-(void)setSharedNotebookGlobalId:(NSString *)arg1 ;
@end

