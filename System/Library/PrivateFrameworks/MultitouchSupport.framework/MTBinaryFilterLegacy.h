/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:08 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MultitouchSupport.framework/MultitouchSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MultitouchSupport/MultitouchSupport-Structs.h>
#import <libobjc.A.dylib/MTBinaryFilterProtocol.h>

@class NSURL, NSString;

@interface MTBinaryFilterLegacy : NSObject <MTBinaryFilterProtocol> {

	unsigned _maxFrameSize;
	MTBinaryFilter* _legacyFilter;
	NSURL* _bundleURL;
	id _cfBundle;
	id _mtDevice;
	/*function pointer*/void* _createBinaryFilter;

}

@property (assign,nonatomic) MTBinaryFilter* legacyFilter;                              //@synthesize legacyFilter=_legacyFilter - In the implementation block
@property (nonatomic,retain) NSURL * bundleURL;                                         //@synthesize bundleURL=_bundleURL - In the implementation block
@property (nonatomic,retain) id cfBundle;                                               //@synthesize cfBundle=_cfBundle - In the implementation block
@property (nonatomic,retain) id mtDevice;                                               //@synthesize mtDevice=_mtDevice - In the implementation block
@property (assign,nonatomic) /*function pointer*/void* createBinaryFilter;              //@synthesize createBinaryFilter=_createBinaryFilter - In the implementation block
@property (nonatomic,readonly) unsigned maxFrameSize;                                   //@synthesize maxFrameSize=_maxFrameSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithInfo:(id)arg1 ;
-(NSURL *)bundleURL;
-(void)reset;
-(id)cfBundle;
-(unsigned)maxFrameSize;
-(void)setBundleURL:(NSURL *)arg1 ;
-(void)filterFrame:(char**)arg1 size:(unsigned*)arg2 maxSize:(unsigned*)arg3 extraFrame:(/*^block*/id)arg4 ;
-(id)initFromURL:(id)arg1 device:(_MTDevice*)arg2 ;
-(MTBinaryFilter*)legacyFilter;
-(void)setLegacyFilter:(MTBinaryFilter*)arg1 ;
-(void)setCfBundle:(id)arg1 ;
-(id)mtDevice;
-(void)setMtDevice:(id)arg1 ;
-(/*function pointer*/void*)createBinaryFilter;
-(void)setCreateBinaryFilter:(/*function pointer*/void*)arg1 ;
@end

