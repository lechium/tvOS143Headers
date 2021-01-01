/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:17 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <IMAP/IMAP-Structs.h>
@class NSMutableArray;

@interface MFIMAPDownloadCache : NSObject {

	NSMutableArray* _downloads;

}
-(void)dealloc;
-(id)downloadForMessage:(id)arg1 ;
-(id)downloadForUid:(unsigned)arg1 section:(id)arg2 length:(unsigned long long)arg3 consumer:(id)arg4 ;
-(id)downloadForUid:(unsigned)arg1 section:(id)arg2 expectedLength:(unsigned long long)arg3 consumer:(id)arg4 ;
-(id)downloadForUid:(unsigned)arg1 section:(id)arg2 range:(NSRange)arg3 consumer:(id)arg4 ;
-(void)handleFetchResponse:(id)arg1 forUid:(unsigned)arg2 ;
-(void)handleFetchResponses:(id)arg1 ;
-(void)processResultsForUid:(unsigned)arg1 ;
-(void)cleanUpDownloadsForUid:(unsigned)arg1 ;
-(void)addCommandsForDownload:(id)arg1 toPipeline:(id)arg2 ;
@end

