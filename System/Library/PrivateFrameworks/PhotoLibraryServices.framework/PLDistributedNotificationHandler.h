/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:52 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, PLPhotoLibraryBundleController;

@interface PLDistributedNotificationHandler : NSObject {

	NSObject*<OS_dispatch_queue> _notificationQueue;
	PLPhotoLibraryBundleController* _libraryBundleController;

}
-(void)registerForNotifications;
-(id)initWithLibraryBundleController:(id)arg1 ;
-(void)_handleNotification:(id)arg1 ;
-(void)_handleCloudPhotoNotification;
-(void)_openSystemPhotoLibrary;
@end

