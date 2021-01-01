/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:51 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoLibraryServices/PLAbstractLibraryServicesManagerService.h>
#import <libobjc.A.dylib/PLAssetsdMigrationServiceProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface PLAssetsdMigrationService : PLAbstractLibraryServicesManagerService <PLAssetsdMigrationServiceProtocol> {

	NSObject*<OS_dispatch_queue> _backgroundQueue;
	NSObject*<OS_dispatch_queue> _dataMigratordQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)moveiPhotoLibraryMediaWithReply:(/*^block*/id)arg1 ;
-(void)cleanupModelForDataMigrationForRestoreType:(long long)arg1 reply:(/*^block*/id)arg2 ;
-(void)dataMigrationWillFinishWithReply:(/*^block*/id)arg1 ;
-(id)initWithLibraryServicesManager:(id)arg1 ;
@end
