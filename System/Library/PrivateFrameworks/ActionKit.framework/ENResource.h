/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:06 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSData, NSString, NSDictionary;

@interface ENResource : NSObject {

	NSData* _data;
	NSString* _mimeType;
	NSString* _filename;
	NSString* _sourceUrl;
	NSData* _dataHash;
	NSDictionary* _edamAttributes;
	NSString* _guid;

}

@property (nonatomic,copy) NSString * sourceUrl;                         //@synthesize sourceUrl=_sourceUrl - In the implementation block
@property (nonatomic,retain) NSData * dataHash;                          //@synthesize dataHash=_dataHash - In the implementation block
@property (nonatomic,retain) NSDictionary * edamAttributes;              //@synthesize edamAttributes=_edamAttributes - In the implementation block
@property (nonatomic,copy) NSString * guid;                              //@synthesize guid=_guid - In the implementation block
@property (nonatomic,retain) NSData * data;                              //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) NSString * mimeType;                          //@synthesize mimeType=_mimeType - In the implementation block
@property (nonatomic,copy) NSString * filename;                          //@synthesize filename=_filename - In the implementation block
@property (nonatomic,readonly) NSString * mediaTag; 
+(id)resourceWithServiceResource:(id)arg1 ;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(NSString *)filename;
-(void)setFilename:(NSString *)arg1 ;
-(void)setGuid:(NSString *)arg1 ;
-(NSString *)guid;
-(NSString *)sourceUrl;
-(void)setSourceUrl:(NSString *)arg1 ;
-(NSString *)mimeType;
-(void)setMimeType:(NSString *)arg1 ;
-(NSDictionary *)edamAttributes;
-(void)setEdamAttributes:(NSDictionary *)arg1 ;
-(id)initWithData:(id)arg1 mimeType:(id)arg2 filename:(id)arg3 ;
-(id)initWithData:(id)arg1 mimeType:(id)arg2 ;
-(NSData *)dataHash;
-(id)EDAMResource;
-(NSString *)mediaTag;
-(void)setDataHash:(NSData *)arg1 ;
@end

