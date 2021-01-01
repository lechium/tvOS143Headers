/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:02 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary, MFMessageFileWrapper;

@interface MFMessageTextAttachment : NSObject {

	NSMutableDictionary* _cache;

}

@property (nonatomic,retain) MFMessageFileWrapper * fileWrapper; 
+(unsigned long long)precedenceLevel;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)download;
-(BOOL)isPlaceholder;
-(MFMessageFileWrapper *)fileWrapper;
-(void)setFileWrapper:(MFMessageFileWrapper *)arg1 ;
-(void)setCachedValue:(id)arg1 forKey:(id)arg2 ;
-(id)cachedValueForKey:(id)arg1 ;
-(id)fileWrapperForcingDownload:(BOOL)arg1 ;
-(id)initWithWrapper:(id)arg1 ;
-(void)setMimePart:(id)arg1 ;
-(unsigned)approximateSize;
-(BOOL)hasBeenDownloaded;
-(BOOL)needsRedownload;
-(void)inlineDisplayData:(id*)arg1 mimeType:(id*)arg2 ;
-(id)persistentUniqueIdentifier;
-(id)mimePart;
-(id)textEncodingGuess;
-(BOOL)shouldDownloadAttachmentOnDisplay;
-(id)textEncodingNameForData:(id)arg1 mimeType:(id)arg2 ;
@end

