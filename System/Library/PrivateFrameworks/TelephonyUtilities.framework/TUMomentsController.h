/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:04 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/TUMomentsControllerDataSourceDelegate.h>

@protocol OS_dispatch_queue, TUMomentsControllerDataSource, TUMomentsControllerDelegate;
@class NSObject, NSMutableDictionary, NSString;

@interface TUMomentsController : NSObject <TUMomentsControllerDataSourceDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	id<TUMomentsControllerDataSource> _dataSource;
	id<TUMomentsControllerDelegate> _delegate;
	NSMutableDictionary* _capabilitiesByVideoStreamToken;
	NSMutableDictionary* _providerByVideoStreamToken;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                                //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) id<TUMomentsControllerDataSource> dataSource;                      //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,__weak,readonly) id<TUMomentsControllerDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * capabilitiesByVideoStreamToken;              //@synthesize capabilitiesByVideoStreamToken=_capabilitiesByVideoStreamToken - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * providerByVideoStreamToken;                  //@synthesize providerByVideoStreamToken=_providerByVideoStreamToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isInternalInstall;
+(BOOL)isFaceTimePhotosRestricted;
+(BOOL)isFaceTimePhotosEnabled;
+(BOOL)isFaceTimePhotosEnabledByDefault;
+(/*^block*/id)faceTimePhotosEnabledDeterminer;
+(void)setFaceTimePhotosEnabledDeterminer:(/*^block*/id)arg1 ;
+(BOOL)isFaceTimePhotosXPCServiceEnabled;
+(void)setFaceTimePhotosEnabled:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(id<TUMomentsControllerDelegate>)delegate;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithDelegate:(id)arg1 ;
-(id<TUMomentsControllerDataSource>)dataSource;
-(id)initWithDelegate:(id)arg1 dataSource:(id)arg2 ;
-(void)endRequestWithTransactionID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSMutableDictionary *)capabilitiesByVideoStreamToken;
-(NSMutableDictionary *)providerByVideoStreamToken;
-(void)dataSource:(id)arg1 didUpdateCapabilities:(id)arg2 forVideoStreamToken:(long long)arg3 ;
-(void)dataSource:(id)arg1 willCaptureRemoteRequestFromRequesterID:(id)arg2 ;
-(void)dataSource:(id)arg1 didReceiveLocallyRequestedMomentDescriptor:(id)arg2 ;
-(void)serverDiedForDataSource:(id)arg1 ;
-(void)startRequestWithMediaType:(int)arg1 forProvider:(id)arg2 requesteeID:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)registerProvider:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)unregisterProvider:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)capabilitiesForProvider:(id)arg1 ;
@end

