/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:10 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Photos.framework/Photos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Photos/Photos-Structs.h>
#import <libobjc.A.dylib/PHMediaRequestLiveRenderingOptions.h>
#import <libobjc.A.dylib/PHMediaRequestThreadingOptions.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PHLivePhotoRequestOptions : NSObject <PHMediaRequestLiveRenderingOptions, PHMediaRequestThreadingOptions, NSCopying> {

	BOOL _networkAccessAllowed;
	BOOL _liveRenderVideoIfNeeded;
	long long _version;
	long long _deliveryMode;
	/*^block*/id _progressHandler;

}

@property (nonatomic,copy,readonly) id progressHandler; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL liveRenderVideoIfNeeded;                                         //@synthesize liveRenderVideoIfNeeded=_liveRenderVideoIfNeeded - In the implementation block
@property (assign,nonatomic) long long version;                                                    //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) long long deliveryMode;                                               //@synthesize deliveryMode=_deliveryMode - In the implementation block
@property (assign,getter=isNetworkAccessAllowed,nonatomic) BOOL networkAccessAllowed;              //@synthesize networkAccessAllowed=_networkAccessAllowed - In the implementation block
@property (nonatomic,copy) id progressHandler;                                                     //@synthesize progressHandler=_progressHandler - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)version;
-(void)setVersion:(long long)arg1 ;
-(id)progressHandler;
-(void)setProgressHandler:(id)arg1 ;
-(BOOL)isSynchronous;
-(BOOL)isNetworkAccessAllowed;
-(void)setNetworkAccessAllowed:(BOOL)arg1 ;
-(id)resultHandlerQueue;
-(BOOL)isCurrentVersion;
-(BOOL)liveRenderVideoIfNeeded;
-(BOOL)liveRenderAndOnDemandRenderVideoConcurrently;
-(id)renderResultHandlerQueue;
-(long long)deliveryMode;
-(void)setDeliveryMode:(long long)arg1 ;
-(void)setLiveRenderVideoIfNeeded:(BOOL)arg1 ;
@end

