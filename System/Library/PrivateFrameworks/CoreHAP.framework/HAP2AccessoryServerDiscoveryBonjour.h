/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:41 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreHAP/HAP2LoggingObject.h>
#import <libobjc.A.dylib/HAP2AccessoryServerDiscovery.h>

@protocol HAP2AccessoryServerDiscoveryDelegate, OS_nw_browser, OS_dispatch_queue;
@class NSObject, NSString, HAP2PropertyLock, NSMutableArray;

@interface HAP2AccessoryServerDiscoveryBonjour : HAP2LoggingObject <HAP2AccessoryServerDiscovery> {

	BOOL _discovering;
	id<HAP2AccessoryServerDiscoveryDelegate> _delegate;
	NSObject*<OS_nw_browser> _browser;
	NSString* _type;
	NSString* _domain;
	NSObject*<OS_dispatch_queue> _workQueue;
	HAP2PropertyLock* _propertyLock;
	NSMutableArray* _browseResults;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                              //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) HAP2PropertyLock * propertyLock;                                     //@synthesize propertyLock=_propertyLock - In the implementation block
@property (assign,getter=isDiscovering,nonatomic) BOOL discovering;                                 //@synthesize discovering=_discovering - In the implementation block
@property (nonatomic,retain) NSObject*<OS_nw_browser> browser;                                      //@synthesize browser=_browser - In the implementation block
@property (nonatomic,retain) NSMutableArray * browseResults;                                        //@synthesize browseResults=_browseResults - In the implementation block
@property (nonatomic,readonly) NSString * type;                                                     //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * domain;                                                   //@synthesize domain=_domain - In the implementation block
@property (assign,nonatomic,__weak) id<HAP2AccessoryServerDiscoveryDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
-(id)init;
-(void)dealloc;
-(NSString *)domain;
-(id<HAP2AccessoryServerDiscoveryDelegate>)delegate;
-(void)setDelegate:(id<HAP2AccessoryServerDiscoveryDelegate>)arg1 ;
-(NSString *)type;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(BOOL)isDiscovering;
-(NSMutableArray *)browseResults;
-(void)setBrowseResults:(NSMutableArray *)arg1 ;
-(HAP2PropertyLock *)propertyLock;
-(NSObject*<OS_nw_browser>)browser;
-(void)setBrowser:(NSObject*<OS_nw_browser>)arg1 ;
-(void)_startDiscovering;
-(void)_stopDiscovering;
-(void)startDiscovering;
-(void)stopDiscovering;
-(void)setDiscovering:(BOOL)arg1 ;
-(id)initWithServiceType:(id)arg1 domain:(id)arg2 ;
-(void)_startBrowser;
-(void)_stopBrowser;
-(void)reconfirmAccessory:(id)arg1 ;
-(id)initWithLocalDomainAndServiceType:(id)arg1 ;
-(void)_handleStateChange:(int)arg1 error:(id)arg2 ;
-(void)_handleBrowseResultsChange:(id)arg1 curent:(id)arg2 batchComplete:(BOOL)arg3 ;
-(void)_handleBrowseResults:(id)arg1 ;
@end

