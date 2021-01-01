/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:07 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DACalDAV/DAEventsAttachmentDownloadConsumer.h>

@class NSString;

@interface MobileCalDAVAccountRefreshActorAttachmentDownloadDelegate : NSObject <DAEventsAttachmentDownloadConsumer> {

	id _retainedSelf;
	NSString* _uuid;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)downloadFinishedError:(id)arg1 ;
-(id)initWithAttachmentUUID:(id)arg1 ;
-(void)beginDownload;
-(void)downloadProgressDownloadedByteCount:(long long)arg1 totalByteCount:(long long)arg2 ;
@end

