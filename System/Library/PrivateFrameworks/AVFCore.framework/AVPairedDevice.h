/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:56 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class AVPairedDeviceInternal, NSString;

@interface AVPairedDevice : NSObject {

	AVPairedDeviceInternal* _ivars;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * pairedDeviceID; 
@property (nonatomic,readonly) NSString * modelID; 
@property (getter=isPlaying,nonatomic,readonly) BOOL playing; 
@property (nonatomic,readonly) NSString * productName; 
+(id)pairedDevicesConnectedToOutputDevice:(id)arg1 ;
-(NSString *)name;
-(void)dealloc;
-(NSString *)productName;
-(id)ID;
-(BOOL)isPlaying;
-(NSString *)modelID;
-(NSString *)pairedDeviceID;
-(id)initWithName:(id)arg1 ID:(id)arg2 modelID:(id)arg3 playing:(BOOL)arg4 productName:(id)arg5 ;
@end
