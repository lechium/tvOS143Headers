/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:45 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/StreamingZip.framework/StreamingZip
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StreamingZip/StreamingUnzipDelegateProtocol.h>

@protocol SZExtractorDelegate;
@interface SZExtractorInternalDelegate : NSObject <StreamingUnzipDelegateProtocol> {

	id<SZExtractorDelegate> delegate;

}

@property (__weak) id<SZExtractorDelegate> delegate; 
-(id<SZExtractorDelegate>)delegate;
-(void)setDelegate:(id<SZExtractorDelegate>)arg1 ;
-(void)setExtractionProgress:(double)arg1 ;
-(void)extractionCompleteAtArchivePath:(id)arg1 ;
-(void)extractionEnteredPassThroughMode;
@end

