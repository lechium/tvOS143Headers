/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:40 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVConference/AVConference-Structs.h>
@interface GKNATObserver : NSObject

@property (assign) NSObject*<GKNATObserverDelegate> delegate; 
+(id)allocWithZone:(NSZone*)arg1 ;
-(NSObject*<GKNATObserverDelegate>)delegate;
-(void)setDelegate:(NSObject*<GKNATObserverDelegate>)arg1 ;
-(id)initWithOptions:(id)arg1 ;
-(int)currentNATType;
-(void)shouldTryNATCheck;
@end

