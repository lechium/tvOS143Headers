/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:12 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/DAMailboxFetchSearchResultConsumer.h>
#import <libobjc.A.dylib/DAMailboxStreamingContentConsumer.h>

@protocol MFDAStreamingContentConsumer;
@class MFConditionLock, MFError;

@interface _MFDAMessageStoreSearchResultBodyConsumer : NSObject <DAMailboxFetchSearchResultConsumer, DAMailboxStreamingContentConsumer> {

	MFConditionLock* _doneCondition;
	id<MFDAStreamingContentConsumer> _streamConsumer;
	MFError* _error;

}

@property (nonatomic,retain) MFError * error;                                              //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) id<MFDAStreamingContentConsumer> streamConsumer;              //@synthesize streamConsumer=_streamConsumer - In the implementation block
-(id)init;
-(void)dealloc;
-(MFError *)error;
-(void)setError:(MFError *)arg1 ;
-(void)waitUntilDone;
-(void)actionFailed:(long long)arg1 forTask:(id)arg2 error:(id)arg3 ;
-(BOOL)waitUntilDoneBeforeDate:(id)arg1 ;
-(void)setStreamConsumer:(id<MFDAStreamingContentConsumer>)arg1 ;
-(id<MFDAStreamingContentConsumer>)streamConsumer;
-(BOOL)shouldBeginStreamingForMailMessage:(id)arg1 format:(int)arg2 ;
-(void)consumeData:(char*)arg1 length:(int)arg2 format:(int)arg3 mailMessage:(id)arg4 ;
-(void)didEndStreamingForMailMessage:(id)arg1 ;
-(void)searchResultFetchedWithResponses:(id)arg1 ;
@end

