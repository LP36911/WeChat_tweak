//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FTSIndexDynamicConfig : NSObject
{
    _Bool _enableFastIndexing;
    _Bool _enableMemCacheSearch;
    unsigned int _uiMsgFastIndexThd;
    unsigned int _uiMsgFastIndexTh;
}

- (id)description;
@property(nonatomic) _Bool enableFastIndexing; // @synthesize enableFastIndexing=_enableFastIndexing;
@property(nonatomic) _Bool enableMemCacheSearch; // @synthesize enableMemCacheSearch=_enableMemCacheSearch;
- (id)init;
@property(nonatomic) unsigned int uiMsgFastIndexTh; // @synthesize uiMsgFastIndexTh=_uiMsgFastIndexTh;
@property(nonatomic) unsigned int uiMsgFastIndexThd; // @synthesize uiMsgFastIndexThd=_uiMsgFastIndexThd;

@end
