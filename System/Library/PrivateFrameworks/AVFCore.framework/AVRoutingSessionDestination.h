/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:55 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVFCore/AVFCore-Structs.h>
@class AVRoutingSessionDestinationInternal, NSArray;

@interface AVRoutingSessionDestination : NSObject {

	AVRoutingSessionDestinationInternal* _ivars;

}

@property (nonatomic,readonly) NSArray * outputDeviceDescriptions; 
@property (nonatomic,readonly) float probability; 
@property (nonatomic,readonly) BOOL providesExternalVideoPlayback; 
-(id)description;
-(id)init;
-(void)dealloc;
-(float)probability;
-(NSArray *)outputDeviceDescriptions;
-(BOOL)providesExternalVideoPlayback;
-(id)initWithFigRoutingSessionDestination:(const CFDictionaryRef)arg1 ;
-(BOOL)_canQueryOutputDeviceDescriptionsAndReturnCurrentValue:(id*)arg1 ;
@end

