/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:33 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Network.framework/Network
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Network/NWMessage.h>

@interface NWOutboundMessage : NWMessage

@property (assign,nonatomic) double relativePriority; 
@property (assign,nonatomic) unsigned long long expirationMilliseconds; 
-(double)relativePriority;
-(id)initWithContent:(id)arg1 ;
-(unsigned long long)expirationMilliseconds;
-(void)setExpirationMilliseconds:(unsigned long long)arg1 ;
-(void)setRelativePriority:(double)arg1 ;
-(void)addAntecedent:(id)arg1 ;
@end

