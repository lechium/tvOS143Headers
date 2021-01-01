/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:39 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@class NSUUID;

@interface HMDWatchSync : HMFObject {

	BOOL _inProgress;
	unsigned long long _syncOption;
	NSUUID* _syncIdentifier;

}

@property (assign,nonatomic) unsigned long long syncOption;               //@synthesize syncOption=_syncOption - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * syncIdentifier;              //@synthesize syncIdentifier=_syncIdentifier - In the implementation block
@property (assign,nonatomic) BOOL inProgress;                             //@synthesize inProgress=_inProgress - In the implementation block
-(id)description;
-(BOOL)inProgress;
-(void)setInProgress:(BOOL)arg1 ;
-(NSUUID *)syncIdentifier;
-(unsigned long long)syncOption;
-(id)initWithSyncOption:(unsigned long long)arg1 ;
-(void)setSyncOption:(unsigned long long)arg1 ;
@end

