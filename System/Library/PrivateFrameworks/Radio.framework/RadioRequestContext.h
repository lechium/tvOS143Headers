/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:18 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Radio/Radio-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SSVFairPlaySAPSession;

@interface RadioRequestContext : NSObject <NSCopying> {

	SSVFairPlaySAPSession* _SAPSession;
	BOOL _usesLocalNetworking;

}

@property (setter=APSession,nonatomic,retain) SSVFairPlaySAPSession * SAPSession;              //@synthesize SAPSession=_SAPSession - In the implementation block
@property (assign,nonatomic) BOOL usesLocalNetworking;                                         //@synthesize usesLocalNetworking=_usesLocalNetworking - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(SSVFairPlaySAPSession *)SAPSession;
-(void)setSAPSession:(SSVFairPlaySAPSession *)arg1 ;
-(BOOL)usesLocalNetworking;
-(void)setUsesLocalNetworking:(BOOL)arg1 ;
@end

