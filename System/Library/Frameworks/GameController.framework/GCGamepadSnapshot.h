/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:35 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/GameController.framework/GameController
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameController/GCGamepad.h>

@class NSData;

@interface GCGamepadSnapshot : GCGamepad {

	NSData* snapshotData;

}

@property (copy) NSData * snapshotData; 
-(id)init;
-(id)initWithController:(id)arg1 snapshotData:(id)arg2 ;
-(void)setSnapshotData:(NSData *)arg1 ;
-(NSData *)snapshotData;
-(id)initWithSnapshotData:(id)arg1 ;
@end

