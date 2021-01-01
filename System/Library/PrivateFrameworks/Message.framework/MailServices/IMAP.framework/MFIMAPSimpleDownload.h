/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:17 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IMAP/IMAP-Structs.h>
#import <IMAP/MFIMAPDownload.h>

@class NSString, NSError;

@interface MFIMAPSimpleDownload : MFIMAPDownload {

	NSString* _section;
	NSError* _error;
	unsigned long long _length;
	unsigned _knownLength : 1;
	unsigned _complete : 1;
	NSRange _range;
	unsigned long long _originalDataLength;
	unsigned long long _offsetAdjustment;

}
-(void)dealloc;
-(id)error;
-(void)setError:(id)arg1 ;
-(BOOL)isComplete;
-(id)section;
-(unsigned long long)expectedLength;
-(unsigned long long)bytesFetched;
-(void)handleFetchResult:(id)arg1 ;
-(void)processResults;
-(void)addCommandsToPipeline:(id)arg1 withCache:(id)arg2 ;
-(unsigned long long)lengthOfDataBeforeLineConversion;
-(id)initWithUid:(unsigned)arg1 section:(id)arg2 length:(unsigned long long)arg3 lengthIsKnown:(BOOL)arg4 range:(NSRange)arg5 consumer:(id)arg6 ;
-(id)initWithUid:(unsigned)arg1 section:(id)arg2 estimatedLength:(unsigned long long)arg3 consumer:(id)arg4 ;
-(id)initWithUid:(unsigned)arg1 section:(id)arg2 length:(unsigned long long)arg3 consumer:(id)arg4 ;
-(id)initWithUid:(unsigned)arg1 section:(id)arg2 range:(NSRange)arg3 consumer:(id)arg4 ;
@end

