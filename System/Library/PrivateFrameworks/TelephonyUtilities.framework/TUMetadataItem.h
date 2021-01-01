/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:05 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface TUMetadataItem : NSObject {

	NSMutableDictionary* _callMetadata;

}

@property (nonatomic,readonly) NSMutableDictionary * callMetadata;              //@synthesize callMetadata=_callMetadata - In the implementation block
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
-(id)description;
-(id)init;
-(BOOL)isEmpty;
-(NSMutableDictionary *)callMetadata;
-(void)setMetadata:(id)arg1 forProvider:(Class)arg2 ;
-(id)metadataForProvider:(Class)arg1 ;
@end

