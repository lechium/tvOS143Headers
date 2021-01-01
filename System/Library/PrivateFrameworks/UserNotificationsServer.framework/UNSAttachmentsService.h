/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:02 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/UNSNotificationRepositoryObserver.h>
#import <libobjc.A.dylib/UNSPendingNotificationRepositoryObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, UNSAttachmentsRepository, UNSNotificationRepository, UNSNotificationSchedulingService, UNSPendingNotificationRepository, NSString;

@interface UNSAttachmentsService : NSObject <UNSNotificationRepositoryObserver, UNSPendingNotificationRepositoryObserver> {

	NSObject*<OS_dispatch_queue> _queue;
	UNSAttachmentsRepository* _attachmentsRepository;
	UNSNotificationRepository* _notificationRepository;
	UNSNotificationSchedulingService* _notificationSchedulingService;
	UNSPendingNotificationRepository* _pendingNotificationRepository;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_stagingDirectory;
+(id)_attachmentURLsRemovedByReplaceUpdate:(id)arg1 ;
+(id)_notificationIdentifiersForNotificationRecords:(id)arg1 ;
-(void)_beginObservingNotificationChanges;
-(void)ensureIntegrityWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_queue_ensureIntegrityWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_notificationIdentifiersForBundleIdentifier:(id)arg1 replyOnQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_queue_resolveAttachmentsForRequest:(id)arg1 bundleIdentifier:(id)arg2 bundleProxy:(id)arg3 continueOnFailure:(BOOL)arg4 error:(id*)arg5 ;
-(id)_queue_resolvedURLForNotificationAttachment:(id)arg1 request:(id)arg2 bundleIdentifier:(id)arg3 bundleProxy:(id)arg4 error:(id*)arg5 ;
-(id)_queue_validatedRepositoryURLForNotificationAttachment:(id)arg1 request:(id)arg2 bundleIdentifier:(id)arg3 bundleProxy:(id)arg4 error:(id*)arg5 ;
-(id)_queue_resolvedFileURLForNotificationAttachment:(id)arg1 request:(id)arg2 bundleIdentifier:(id)arg3 bundleProxy:(id)arg4 error:(id*)arg5 ;
-(id)_temporaryAttachmentFileURL;
-(void)_queue_deleteAttachmentDataForNotificationRecord:(id)arg1 bundleIdentifier:(id)arg2 ;
-(void)_queue_notificationSourcesDidUninstall:(id)arg1 ;
-(void)_queue_applicationDidUninstall:(id)arg1 ;
-(void)_repositoryDidPerformUpdates:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)notificationRepository:(id)arg1 didPerformUpdates:(id)arg2 forBundleIdentifier:(id)arg3 ;
-(void)pendingNotificationRepository:(id)arg1 didPerformUpdates:(id)arg2 forBundleIdentifier:(id)arg3 ;
-(id)initWithAttachmentsRepository:(id)arg1 notificationRepository:(id)arg2 notificationSchedulingService:(id)arg3 pendingNotificationRepository:(id)arg4 ;
-(void)contentProtectionStateChangedForFirstUnlock:(BOOL)arg1 ;
-(id)resolveAttachmentsForRequest:(id)arg1 bundleIdentifier:(id)arg2 bundleProxy:(id)arg3 error:(id*)arg4 ;
-(id)resolveAttachmentsSkippingErrorsForRequest:(id)arg1 bundleIdentifier:(id)arg2 bundleProxy:(id)arg3 ;
-(void)_queue_deleteAttachmentDataForNotificationRecords:(id)arg1 bundleIdentifier:(id)arg2 ;
-(void)notificationSourcesDidUninstall:(id)arg1 ;
@end

