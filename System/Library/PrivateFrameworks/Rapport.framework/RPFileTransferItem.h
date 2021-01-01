/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:48 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSURL, NSDictionary, NSData, NSError;

@interface RPFileTransferItem : NSObject {

	BOOL _completed;
	long long _fileSize;
	/*^block*/id _completionHandler;
	NSString* _filename;
	NSURL* _itemURL;
	NSDictionary* _metadata;
	NSData* _sha256HashData;
	NSError* _error;
	unsigned long long _estimatedSize;
	NSData* _fileData;
	unsigned long long _fileID;
	unsigned long long _metadataSize;

}

@property (assign,nonatomic) BOOL completed;                                //@synthesize completed=_completed - In the implementation block
@property (nonatomic,retain) NSError * error;                               //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) unsigned long long estimatedSize;              //@synthesize estimatedSize=_estimatedSize - In the implementation block
@property (nonatomic,retain) NSData * fileData;                             //@synthesize fileData=_fileData - In the implementation block
@property (assign,nonatomic) unsigned long long fileID;                     //@synthesize fileID=_fileID - In the implementation block
@property (assign,nonatomic) long long fileSize;                            //@synthesize fileSize=_fileSize - In the implementation block
@property (assign,nonatomic) unsigned long long metadataSize;               //@synthesize metadataSize=_metadataSize - In the implementation block
@property (nonatomic,copy) NSData * sha256HashData;                         //@synthesize sha256HashData=_sha256HashData - In the implementation block
@property (nonatomic,copy) id completionHandler;                            //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) NSString * filename;                             //@synthesize filename=_filename - In the implementation block
@property (nonatomic,copy) NSURL * itemURL;                                 //@synthesize itemURL=_itemURL - In the implementation block
@property (nonatomic,copy) NSDictionary * metadata;                         //@synthesize metadata=_metadata - In the implementation block
-(id)description;
-(id)init;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(long long)fileSize;
-(NSString *)filename;
-(void)setFilename:(NSString *)arg1 ;
-(NSDictionary *)metadata;
-(BOOL)completed;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(id)descriptionWithLevel:(int)arg1 ;
-(void)setCompleted:(BOOL)arg1 ;
-(void)setFileSize:(long long)arg1 ;
-(unsigned long long)fileID;
-(void)setFileID:(unsigned long long)arg1 ;
-(NSURL *)itemURL;
-(void)setItemURL:(NSURL *)arg1 ;
-(NSData *)fileData;
-(void)setFileData:(NSData *)arg1 ;
-(unsigned long long)estimatedSize;
-(unsigned long long)metadataSize;
-(void)setMetadataSize:(unsigned long long)arg1 ;
-(void)setEstimatedSize:(unsigned long long)arg1 ;
-(void)setSha256HashData:(NSData *)arg1 ;
-(NSData *)sha256HashData;
@end

