/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:16 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NetworkExtension/NENexusFlow.h>

@class NWPath;

@interface NENexusPathFlow : NENexusFlow {

	NWPath* _path;

}

@property (retain) NWPath * path;              //@synthesize path=_path - In the implementation block
-(NWPath *)path;
-(void)setPath:(NWPath *)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(id)endpoint;
-(id)parameters;
-(id)clientIdentifier;
@end

